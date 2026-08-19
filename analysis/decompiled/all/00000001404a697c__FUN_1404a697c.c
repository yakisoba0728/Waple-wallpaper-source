// Function: FUN_1404a697c
// Addr: 1404a697c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a697c(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  char in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RDI;
  
  cVar1 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI &
               CONCAT22((short)((uint)param_2 >> 0x10),
                        CONCAT11((char)((uint)param_2 >> 8) + cVar1,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

