// Function: FUN_1404c5680
// Addr: 1404c5680
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5680(void)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  
  bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       (*(int *)CONCAT71(in_register_00000001,in_AL) - unaff_ESP) - (uint)CARRY1(bVar1,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

