// Function: FUN_1404c3974
// Addr: 1404c3974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3974(char *param_1)

{
  uint uVar1;
  char *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  byte in_CF;
  
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) + unaff_ESI + (uint)in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + unaff_BL;
  uVar1 = (uint)in_RAX & 0x1130009;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

