// Function: FUN_1404c48f8
// Addr: 1404c48f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c48f8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  byte bVar3;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char in_CF;
  
  bVar3 = in_AL + '4' + in_CF;
  *(byte *)CONCAT71(in_register_00000001,bVar3) =
       *(byte *)CONCAT71(in_register_00000001,bVar3) | bVar3;
  cVar2 = bVar3 + 0x52;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + 0x60);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0xad < bVar3);
  *param_1 = *param_1 + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) + 0x36);
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

