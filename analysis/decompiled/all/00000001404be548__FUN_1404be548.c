// Function: FUN_1404be548
// Addr: 1404be548
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be548(void)

{
  uint uVar1;
  undefined8 in_RAX;
  undefined1 *puVar2;
  char unaff_SPL;
  char *in_R9;
  
  uVar1 = (uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                         (char)((ulonglong)in_RAX >> 8) + (char)in_RAX) & 0x25c43f;
  puVar2 = (undefined1 *)(ulonglong)(uVar1 << 8);
  puVar2[0xd] = puVar2[0xd] + (char)uVar1;
  *in_R9 = *in_R9 + unaff_SPL;
  *puVar2 = *puVar2;
  *puVar2 = *puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

