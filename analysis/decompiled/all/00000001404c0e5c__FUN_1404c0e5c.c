// Function: FUN_1404c0e5c
// Addr: 1404c0e5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0e5c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte bVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 2);
  *pcVar1 = *pcVar1 + bVar2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + (char)param_1;
  bVar2 = bVar2 | param_1[CONCAT71(in_register_00000001,
                                   in_AL | *(byte *)(CONCAT71(in_register_00000001,in_AL) +
                                                    CONCAT71(in_register_00000001,in_AL)))];
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

