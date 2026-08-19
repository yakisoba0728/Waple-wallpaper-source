// Function: FUN_1404d2300
// Addr: 1404d2300
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2300(undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  byte *in_RAX;
  byte bVar3;
  char unaff_BL;
  char unaff_BH;
  uint *unaff_RBP;
  char *unaff_RSI;
  uint uVar4;
  
  *in_RAX = *in_RAX + unaff_BH;
  bVar3 = (byte)param_1 & (byte)*unaff_RBP;
  uVar4 = CONCAT31((int3)((ulonglong)param_1 >> 8),bVar3);
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar4) + 0x22);
  *pcVar1 = *pcVar1 - (char)in_RAX;
  uVar2 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP + uVar4;
  *unaff_RSI = *unaff_RSI + unaff_BL +
               (CARRY1(bVar3,*in_RAX) || CARRY1(bVar3 + *in_RAX,CARRY4(uVar2,uVar4)));
  in_RAX[0x4840002b] = in_RAX[0x4840002b] + 0xb0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

