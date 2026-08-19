// Function: FUN_1404c6104
// Addr: 1404c6104
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6104(char param_1,uint *param_2)

{
  uint uVar1;
  uint *in_RAX;
  uint unaff_ESI;
  
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  uVar1 = *param_2;
  *param_2 = *param_2 - unaff_ESI;
  *(char *)param_2 = (char)*param_2 + param_1;
  if ((char)*param_2 != '\0') {
    cRam00000001204c6751 = cRam00000001204c6751 + ((byte)in_RAX - 0x10) + (uVar1 < unaff_ESI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

