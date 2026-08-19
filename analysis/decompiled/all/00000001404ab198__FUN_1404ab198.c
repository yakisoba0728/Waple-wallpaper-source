// Function: FUN_1404ab198
// Addr: 1404ab198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab198(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & param_1;
  cVar3 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,cVar3) + 0xf);
  *pbVar1 = *pbVar1 | (byte)(param_1 >> 8);
  pcVar2 = (char *)(CONCAT71(in_register_00000001,cVar3) + -0x4b);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

