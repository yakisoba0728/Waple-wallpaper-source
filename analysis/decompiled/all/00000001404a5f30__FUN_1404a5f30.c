// Function: FUN_1404a5f30
// Addr: 1404a5f30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f30(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  char cVar2;
  char in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  char cVar4;
  undefined6 uVar5;
  char unaff_BH;
  char unaff_SPL;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = in_AH + (char)param_2;
  cVar4 = (char)((ulonglong)param_1 >> 8) + '\b';
  *(char *)(param_2 + -0x39) = *(char *)(param_2 + -0x39) + unaff_BH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL)) | in_AL;
  cVar2 = in_AL + 0xa2;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_1)) + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar2)) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar2)) + 0x7a0008c5);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

