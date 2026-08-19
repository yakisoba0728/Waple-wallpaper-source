// Function: FUN_1404c9118
// Addr: 1404c9118
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9118(char *param_1,byte *param_2)

{
  byte in_AL;
  byte bVar1;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_R12B;
  
  *param_2 = *param_2 ^ in_AL;
  bVar1 = in_AL ^ *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1;
  cVar2 = in(4);
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

