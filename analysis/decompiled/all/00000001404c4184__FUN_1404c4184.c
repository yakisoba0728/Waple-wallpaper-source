// Function: FUN_1404c4184
// Addr: 1404c4184
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4184(char *param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  undefined7 in_register_00000001;
  char cVar4;
  byte unaff_BL;
  char in_CF;
  bool bVar5;
  bool bVar6;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  param_1[(longlong)param_2] = (param_1[(longlong)param_2] - cVar4) - in_CF;
  bVar5 = CARRY1(*(byte *)CONCAT71(in_register_00000001,in_AL),unaff_BL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + unaff_BL;
  bVar6 = 0x1f < in_AL || CARRY1(in_AL - 0x20,bVar5);
  bVar2 = (in_AL - 0x20) + bVar5;
  cVar3 = bVar2 * '\x02' + bVar6;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar3) + 1);
  *pcVar1 = *pcVar1 + cVar4 + (CARRY1(bVar2,bVar2) || CARRY1(bVar2 * '\x02',bVar6));
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *param_1 = *param_1 + unaff_BL;
  *param_2 = *param_2 + (char)param_2;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

