// Function: FUN_1404bc874
// Addr: 1404bc874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc874(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  bVar2 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  bVar2 = bVar2 & *(byte *)CONCAT71(in_register_00000001,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + -0x7bffdd07);
  *pcVar1 = *pcVar1 + (char)param_2;
  bVar2 = bVar2 & *(byte *)CONCAT71(in_register_00000001,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

