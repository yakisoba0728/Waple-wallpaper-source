// Function: FUN_1404b1db8
// Addr: 1404b1db8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1db8(void)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + 0x4e) =
       *(char *)(unaff_RBX + 0x4e) +
       (char)((uint)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) + 0x7c40500)
             >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

