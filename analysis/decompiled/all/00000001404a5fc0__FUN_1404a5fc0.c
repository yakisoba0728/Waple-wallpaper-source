// Function: FUN_1404a5fc0
// Addr: 1404a5fc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5fc0(char *param_1,undefined8 param_2)

{
  char cVar1;
  int in_EAX;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  char unaff_BH;
  char unaff_SPL;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  pbVar2 = (byte *)(ulonglong)(in_EAX + 0x90000a54U);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  cVar1 = (char)(in_EAX + 0x90000a54U);
  cVar4 = (char)((ulonglong)param_2 >> 8) + cVar1;
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  param_1[CONCAT62(uVar5,CONCAT11(cVar4,cVar3))] =
       param_1[CONCAT62(uVar5,CONCAT11(cVar4,cVar3))] + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *pbVar2 = *pbVar2 + cVar1;
  pbVar2[-0x39fff730] = pbVar2[-0x39fff730] + cVar3;
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  param_1[CONCAT62(uVar5,CONCAT11(cVar4,cVar3))] =
       param_1[CONCAT62(uVar5,CONCAT11(cVar4,cVar3))] + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *pbVar2 = *pbVar2 + (char)param_1;
  *pbVar2 = *pbVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

