// Function: FUN_1404c9108
// Addr: 1404c9108
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9108(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  undefined7 in_register_00000001;
  char cVar4;
  undefined6 uVar5;
  char unaff_R12B;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 ^ in_AL;
  bVar2 = in_AL ^ *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + cVar4;
  cVar4 = cVar4 + *param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  cVar3 = (bVar2 ^ *(byte *)CONCAT71(in_register_00000001,bVar2)) + 0x90;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_2)) + (char)param_1;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  cVar3 = in(4);
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

