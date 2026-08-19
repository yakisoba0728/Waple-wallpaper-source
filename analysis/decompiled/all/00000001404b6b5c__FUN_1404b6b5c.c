// Function: FUN_1404b6b5c
// Addr: 1404b6b5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6b5c(undefined8 param_1,char param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char *unaff_RDI;
  bool in_SF;
  
  if (!in_SF) {
    bVar1 = *param_4;
    *param_4 = *param_4 + in_AL;
    *unaff_RDI = *unaff_RDI + in_AL + CARRY1(bVar1,in_AL);
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + param_2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

