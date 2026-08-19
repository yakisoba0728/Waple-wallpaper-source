// Function: FUN_1404cde80
// Addr: 1404cde80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cde81) overlaps instruction at (ram,0x0001404cde80)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cde72) */

void FUN_1404cde80(char *param_1,char *param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RDI;
  char in_R11B;
  bool in_ZF;
  float10 in_ST0;
  float10 in_ST1;
  
  if (in_ZF) {
    *param_2 = *param_2 + (char)param_1;
    if (*param_2 == '\0') {
      *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNK_1404ceacd = UNK_1404ceacd + in_AL;
    *(uint *)CONCAT71(in_register_00000001,in_AL) =
         *(int *)CONCAT71(in_register_00000001,in_AL) << 10 |
         *(uint *)CONCAT71(in_register_00000001,in_AL) >> 0x16;
    *(uint *)CONCAT71(in_register_00000001,in_AL) =
         *(int *)CONCAT71(in_register_00000001,in_AL) << 0x14 |
         *(uint *)CONCAT71(in_register_00000001,in_AL) >> 0xc;
    *(longlong *)
     (CONCAT71(in_register_00000001,in_AL) + 0x21 + CONCAT71(in_register_00000001,in_AL)) =
         (longlong)in_ST0;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    *(uint *)CONCAT71(in_register_00000001,in_AL) =
         *(int *)CONCAT71(in_register_00000001,in_AL) << 10 |
         *(uint *)CONCAT71(in_register_00000001,in_AL) >> 0x16;
    *(uint *)CONCAT71(in_register_00000001,in_AL) =
         *(int *)CONCAT71(in_register_00000001,in_AL) << 0x14 |
         *(uint *)CONCAT71(in_register_00000001,in_AL) >> 0xc;
    *(longlong *)
     (CONCAT71(in_register_00000001,in_AL) + 0x19 + CONCAT71(in_register_00000001,in_AL)) =
         (longlong)in_ST1;
  }
  else {
    *param_1 = *param_1 + in_R11B;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

