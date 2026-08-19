// Function: FUN_1404c265c
// Addr: 1404c265c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c265c(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(param_2 + (longlong)param_1 * 4);
  *pcVar1 = *pcVar1 + in_AL;
  cVar5 = (char)param_2 + cVar6;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_1 = *param_1 + cVar5;
  *(uint *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
       *(uint *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) & (uint)param_1;
  *param_1 = *param_1 + in_AH;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AH;
  bVar4 = ((byte)param_1 & 0x1f) % 9;
  cVar3 = *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5));
  *(byte *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
       (byte)(CONCAT11(CARRY1(bVar2,in_AH),cVar3) >> bVar4) | cVar3 << 9 - bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

