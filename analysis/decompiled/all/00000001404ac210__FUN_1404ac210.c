// Function: FUN_1404ac210
// Addr: 1404ac210
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac210(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  char in_AL;
  undefined7 in_register_00000001;
  bool in_OF;
  
  if (in_OF) {
    verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = TaskRegister();
  *(undefined2 *)(param_2 + -0x43) = uVar2;
  verw();
  cVar1 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  if (!SCARRY1(cVar1,in_AL)) {
    uVar2 = TaskRegister();
    *(undefined2 *)(param_2 + -0x43) = uVar2;
    verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

