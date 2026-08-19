// Function: FUN_1404a0258
// Addr: 1404a0258
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0258(byte *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  longlong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  
  uVar1 = (uint)in_RAX;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar1;
  param_1[-0xaaffffd] = param_1[-0xaaffffd] + unaff_BL;
  *param_4 = *param_4 + (char)in_RAX;
  *(uint *)(in_RAX * 2) = *(uint *)(in_RAX * 2) | uVar1;
  *param_2 = *param_2 | unaff_ESI;
  uVar1 = uVar1 + 0x26003f0;
  *param_1 = *param_1 ^ (byte)(uVar1 >> 8);
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

