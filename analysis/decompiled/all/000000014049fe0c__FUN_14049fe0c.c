// Function: FUN_14049fe0c
// Addr: 14049fe0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe0c(uint param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  longlong in_RAX;
  byte *unaff_RBX;
  char unaff_SPL;
  byte *unaff_RDI;
  char *pcVar7;
  
  *param_2 = *param_2 & param_1;
  bVar1 = unaff_RDI[in_RAX];
  iVar6 = (int)in_RAX + -0x6ffff99c;
  uVar3 = (undefined3)((uint)iVar6 >> 8);
  bVar5 = (byte)iVar6 | *unaff_RBX;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,bVar5);
  unaff_RBX[0x3000030a] = unaff_RBX[0x3000030a] + (char)(param_1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar7 = *pcVar7 + bVar5;
  pcVar7[-0x54fffcf6] = pcVar7[-0x54fffcf6] + (char)param_2;
  bVar2 = *unaff_RBX;
  uVar4 = CONCAT31(uVar3,bVar5 | bVar2);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + ((byte)((ulonglong)param_2 >> 8) | bVar1);
  *param_4 = *param_4 + (bVar5 | bVar2);
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)param_1;
  if (!CARRY1(bVar1,(byte)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44efe50 = uRam00000001b44efe50 & uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

