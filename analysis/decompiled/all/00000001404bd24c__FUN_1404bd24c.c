// Function: FUN_1404bd24c
// Addr: 1404bd24c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd24c(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + unaff_BL;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       (uint)((*(uint *)CONCAT71(unaff_00000019,unaff_BL) & 1) != 0) << 0x1f;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) & (byte)param_2;
  pcVar1 = (char *)(param_1 + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

