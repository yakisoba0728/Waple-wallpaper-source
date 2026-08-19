// Function: FUN_1404cb048
// Addr: 1404cb048
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb048(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar4;
  undefined8 in_RAX;
  undefined7 uVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar3;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX | *(byte *)(unaff_RBP + 0x33);
  pcVar3 = (char *)CONCAT71(uVar5,bVar2);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + bVar2;
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + bVar2;
  cVar6 = (char)((ulonglong)param_2 >> 8) + unaff_BL;
  bVar2 = bVar2 | *(byte *)(unaff_RBP + 0x33);
  pcVar3 = (char *)CONCAT71(uVar5,bVar2);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,(char)param_2)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

