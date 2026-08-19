// Function: FUN_1404c0be8
// Addr: 1404c0be8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0be8(void)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  char *pcVar3;
  
  *(char *)(in_RAX + -0x15fffffe) = (char)in_RAX[-0x15fffffe] + unaff_BH;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(char *)((longlong)in_RAX + -0x77fffff6) = *(char *)((longlong)in_RAX + -0x77fffff6) + unaff_BL;
  uVar2 = (uint)in_RAX | *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0xc] = pcVar3[0xc] + unaff_BH;
  cVar1 = (char)uVar2;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 - cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

