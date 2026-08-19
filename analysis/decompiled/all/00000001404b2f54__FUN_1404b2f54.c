// Function: FUN_1404b2f54
// Addr: 1404b2f54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2f54(void)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) + 0x7c40500;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)uVar2;
  pcVar1 = (char *)((ulonglong)uVar2 - 0x4f);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

