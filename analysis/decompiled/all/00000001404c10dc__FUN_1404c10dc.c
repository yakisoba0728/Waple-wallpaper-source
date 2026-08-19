// Function: FUN_1404c10dc
// Addr: 1404c10dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c10dc(char *param_1,undefined8 param_2)

{
  char cVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  cVar1 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  bVar2 = in_AL & (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + (char)((ulonglong)param_2 >> 8) + cVar1;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

