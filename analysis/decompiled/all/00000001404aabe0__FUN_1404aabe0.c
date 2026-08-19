// Function: FUN_1404aabe0
// Addr: 1404aabe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aabe0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char in_AL;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  uint unaff_ESI;
  
  cRam0000000000000000 = cRam0000000000000000 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xaa,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xaa,in_AL))) +
       in_AL;
  cVar2 = in_AL + -0x56;
  out((short)param_2,CONCAT22(in_register_00000002,CONCAT11(0xaa,cVar2)));
  cRam0000000000000000 = cRam0000000000000000 + cVar2;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(0xaa,cVar2))) +
                   CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xaa,cVar2))
                           ));
  *puVar1 = *puVar1 | CONCAT22(in_register_00000002,CONCAT11(0xaa,cVar2));
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

