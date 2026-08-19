// Function: FUN_1404c125c
// Addr: 1404c125c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1284) overlaps instruction at (ram,0x0001404c1282)
    */

void FUN_1404c125c(byte *param_1,byte *param_2,char param_3)

{
  char cVar1;
  char cVar4;
  uint in_EAX;
  uint uVar2;
  byte bVar5;
  byte bVar6;
  undefined6 uVar7;
  char unaff_R12B;
  uint *puVar3;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar5 = (byte)param_1;
  uRam00000001b4511264 = uRam00000001b4511264 & in_EAX;
  uVar2 = in_EAX | 0x290a2000;
  puVar3 = (uint *)(ulonglong)uVar2;
  cVar1 = (char)in_EAX;
  (param_2 + 0x11840029)[(longlong)param_1] = (param_2 + 0x11840029)[(longlong)param_1] + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar1;
  *(char *)puVar3 = (char)*puVar3 + cVar1;
  if ((char)*puVar3 == '\0') {
    *puVar3 = *puVar3 & uVar2;
    *(char *)puVar3 = (char)*puVar3 + cVar1;
    *param_2 = *param_2 & bVar5;
    *puVar3 = *puVar3 - uVar2;
    *puVar3 = *puVar3 - uVar2;
  }
  cVar4 = (char)(uVar2 >> 8);
  *(char *)puVar3 = (char)*puVar3 + cVar4;
  bVar6 = (byte)((ulonglong)param_1 >> 8) | *param_1;
  param_2[CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x11840029] =
       param_2[CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x11840029] + cVar1;
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + unaff_R12B;
  *(char *)puVar3 = (char)*puVar3 + cVar1;
  *(char *)puVar3 = (char)*puVar3 + cVar4;
  bVar6 = bVar6 | *(byte *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5));
  param_2[CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x11840029] =
       param_2[CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x11840029] + cVar1;
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

