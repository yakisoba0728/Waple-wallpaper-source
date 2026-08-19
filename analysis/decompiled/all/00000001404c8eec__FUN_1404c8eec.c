// Function: FUN_1404c8eec
// Addr: 1404c8eec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8eec(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined1 uVar3;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar4;
  char cVar5;
  undefined6 uVar6;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)param_2;
  cVar5 = (char)((ulonglong)param_2 >> 8) +
          *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar2 = in_AL & bVar4;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + 0x21000000);
  *pcVar1 = *pcVar1 + bVar4;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) - (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) +
       (char)((ulonglong)param_1 >> 8);
  uVar3 = in(0x14);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar3)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

