// Function: FUN_1404d75ac
// Addr: 1404d75ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d75ac(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESI;
  uint *unaff_RDI;
  
  *(ulonglong *)
   ((ulonglong)
    (uint)((int)&stack0x00000000 + *(int *)(CONCAT71(in_register_00000001,in_AL + 'p') + 2)) - 8) =
       CONCAT71(in_register_00000001,in_AL + 'p');
  *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

