#include <core/defines.h>
#include <math.h>
#include "dma.h"
#include "gif.h"
#include "vif.h"
#include "vu1.h"

namespace NxPs2
{



/*	浜様様様様様様様�
	� GIFtag format �
	藩様様様様様様様�


	 31                                           16 15 14                                         0
	敖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�                                               �EOP                   NLOOP                    �
	青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳祖珍陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�


	 63       60 59 58 57                            47 46 45                                     32
	敖陳陳陳陳陳堕陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�   NREG    � FLG �              PRIM              �PRE                                         �
	青陳陳陳陳陳祖陳陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳珍陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�


	 95                                                       76 75       72 71       68 67       64
	敖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳堕陳陳陳陳陳堕陳陳陳陳陳�
	�                                                     ...   �  [REG2]   �  [REG1]   �   REG0    �
	青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳祖陳陳陳陳陳祖陳陳陳陳陳祖陳陳陳陳陳�


	 127                                                                                          96
	敖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�                                                                                               �
	青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�



	浜様様様様様様様様様様�
	� PATH1 GIFtag format �
	藩様様様様様様様様様様�


	 31 30                   23 22                16 15 14                                         0
	敖賃陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳堕賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�0 �     NREG exponent     � << NREG            �EOP                   NLOOP                    �
	青珍陳陳陳陳陳陳陳陳陳陳陳珍陳陳陳陳陳陳陳陳陳陳祖珍陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�


	 63       60 59 58 57                            47 46 45    43 42                            32
	敖陳陳陳陳陳堕陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳堕陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�   NREG    � FLG �              PRIM              �PRE        �              ADDR              �
	青陳陳陳陳陳祖陳陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳珍陳祖陳陳陳珍陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�


	 95                                                       76 75       72 71       68 67       64
	敖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳堕陳陳陳陳陳堕陳陳陳陳陳�
	�                                                     ...   �  [REG2]   �  [REG1]   �   REG0    �
	青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳祖陳陳陳陳陳祖陳陳陳陳陳祖陳陳陳陳陳�


	 127                                         112 111           106 105                        96
	敖陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳陳陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
	�                                               �      flags      �            SIZE             �
	青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳祖陳陳陳陳陳陳陳陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳陳�


	flags:
	106 -
	107 -
	108 -
	109 -
	110 - no ITOP	}
	111 - no ITOP	} uses 2 flags because the parsing loop is quicker
	


*/



//-------------------------------------------------
//		G I F T A G   C O N S T R U C T I O N
//-------------------------------------------------


// PATH1


void gif::Tag1(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre, uint Eop, uint NLoop, uint Addr)
{
	uint32 size = NReg * NLoop;
	float NRegFloat  = (float)NReg * 1.1920928955e-07f;	// 2^-23
	dma::Store32(*(uint32 *)&NRegFloat | Eop<<15 | NLoop,
							NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14 | Addr,
							Regs,
							size);
}


void gif::BeginTag1(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre, uint Addr)
{
	float NRegFloat = (float)NReg * 1.1920928955e-07f;	// 2^-23
	pTag = dma::pLoc;
	dma::Store32(*(uint32 *)&NRegFloat,
							NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14 | Addr,
							Regs,
							0);
}


void gif::BeginTag1_extended(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre, uint Addr, uint Step)
{
	float StepFloat = (float)Step * 1.1920928955e-07f;	// 2^-23
	pTag = dma::pLoc;
	dma::Store32(*(uint32 *)&StepFloat,
					NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14 | Addr,
					Regs,
					0);
}


void gif::EndTag1(uint Eop)
{
	uint32 size = vif::UnpackSize * vif::CycleLength;
	((uint32 *)pTag)[0] |= Eop<<15 | vif::UnpackSize;
	((uint32 *)pTag)[3] = size;
	vu1::Loc += vif::UnpackSize * vif::CycleLength + 1;
}


void gif::BeginTagImmediate(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre, uint Addr)
{
	float NRegFloat = (float)NReg * 1.1920928955e-07f;	// 2^-23
	pTag = dma::pLoc;
	dma::Store32(*(uint32 *)&NRegFloat,
							NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14 | Addr,
							Regs,
							0);
}


void gif::EndTagImmediate(uint Eop)
{
	uint32 size = vif::UnpackSize;
	uint NREG = pTag[7]>>4;
	((uint32 *)pTag)[0] |= Eop<<15 | (vif::UnpackSize/NREG);
	((uint32 *)pTag)[3] = size;
	vu1::Loc += vif::UnpackSize+1;
}




// PATH2 or 3

void gif::Tag2(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre, uint Eop, uint NLoop)
{
	dma::Store32(	Eop<<15 | NLoop,									
					NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14,
					Regs,
					0);
}


void gif::BeginTag2(uint32 Regs, uint NReg, uint Flg, uint Prim, uint Pre)
{
	pTag = dma::pLoc;
	dma::Store32(	0,
					NReg<<28 | Flg<<26 | Prim<<15 | Pre<<14,
					Regs,
					0);
}


void gif::EndTag2(uint Eop)
{
	uint FLG  = pTag[7]>>2 & 3;
	uint NREG = pTag[7]>>4;
	uint NLOOP;
	if (FLG==IMAGE)
		NLOOP = (dma::pLoc - pTag - 16) / 16;
	else
		NLOOP = (dma::pLoc - pTag - 16) / (16*NREG);
	*(uint32 *)pTag |= Eop<<15 | NLOOP;
}


//--------------------------------
//		S T A T I C   D A T A
//--------------------------------

uint8 *gif::pTag;



} // namespace NxPs2

