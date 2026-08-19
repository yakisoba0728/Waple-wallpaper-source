// Function: FUN_1404b5e0c
// Addr: 1404b5e0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5e0c(char *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  byte unaff_BL;
  byte bVar4;
  undefined7 unaff_00000019;
  int unaff_ESP;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bVar4 = unaff_BL ^ *(byte *)CONCAT71(unaff_00000019,unaff_BL);
  pbVar1 = (byte *)(unaff_RBP + 0x32);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  uVar3 = *in_RAX;
  *(byte *)(unaff_RBP + 0x4b) = *(byte *)(unaff_RBP + 0x4b) & bVar4;
  *param_1 = *param_1 + (((char)in_RAX - (char)uVar3) - CARRY1(bVar2,param_2));
  *(byte *)CONCAT71(unaff_00000019,bVar4) = *(char *)CONCAT71(unaff_00000019,bVar4) + bVar4;
  iRam000000014fbb6e27 = iRam000000014fbb6e27 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

