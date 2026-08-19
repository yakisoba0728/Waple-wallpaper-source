// Function: FUN_1404c12b4
// Addr: 1404c12b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c12b4(int *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined6 uVar8;
  int unaff_EBX;
  byte *unaff_RSI;
  byte *pbVar3;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)param_2;
  cVar5 = (char)((ulonglong)param_1 >> 8);
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX & bVar6;
  pbVar3 = (byte *)CONCAT71(uVar4,bVar2);
  *pbVar3 = *pbVar3 + cVar5;
  bVar7 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *param_1 = (*param_1 - unaff_EBX) - (uint)CARRY1(bVar7,bVar2);
  pbVar3 = (byte *)CONCAT71(uVar4,bVar2);
  bVar7 = (byte)((ulonglong)param_2 >> 8) | pbVar3[param_2];
  cVar1 = *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6));
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) + (char)param_1;
  if (!SCARRY1(cVar1,(char)param_1)) {
    *unaff_RSI = *unaff_RSI >> 1;
    *pbVar3 = *pbVar3 + (char)unaff_EBX;
    bVar7 = *pbVar3;
    *pbVar3 = *pbVar3 + bVar2;
    *(uint *)unaff_RSI = (*(int *)unaff_RSI - unaff_EBX) - (uint)CARRY1(bVar7,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

