// Function: FUN_1404a0140
// Addr: 1404a0140
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a017a) */

void FUN_1404a0140(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong in_RAX;
  byte unaff_BL;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  bRam000000012df20149 = bRam000000012df20149 ^ unaff_BL;
  *param_4 = *param_4 + (byte)in_RAX;
  *unaff_RDI = *unaff_RDI + param_1;
  *(byte *)(in_FS_OFFSET + in_RAX) = *(byte *)(in_FS_OFFSET + in_RAX) | (byte)in_RAX;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

