// Function: FUN_1404b550c
// Addr: 1404b550c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b550c(void)

{
  uint uVar1;
  uint *in_RAX;
  undefined8 uVar2;
  char *in_R9;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam00001a89bb001a89);
  *in_R9 = *in_R9 + cRam00001a89bb001a89;
  uVar1 = (uint)uVar2 | 0x10d0003;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 - (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

