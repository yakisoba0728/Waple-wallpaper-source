// Function: FUN_1404c11a0
// Addr: 1404c11a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c11b7) overlaps instruction at (ram,0x0001404c11b6)
    */

void FUN_1404c11a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  undefined6 uVar8;
  int unaff_EBP;
  byte *unaff_RSI;
  char in_CF;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)param_2;
  cVar7 = (char)((ulonglong)param_2 >> 8) + (&stack0x00000000)[param_1] + in_CF;
  bVar3 = *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6));
  cVar1 = *(char *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6));
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6)) + bVar6;
  if ((CARRY1(bVar3,bVar6)) ||
     (param_1 = param_1 + -1, param_1 != 0 && *(char *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6)) != '\0'
     )) {
    *unaff_RSI = *unaff_RSI >> 1;
    *(byte *)in_RAX = (byte)*in_RAX + (char)param_1;
  }
  else if (!SCARRY1(cVar1,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (byte)*in_RAX + (char)param_1;
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *(uint *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6)) =
       (*(int *)CONCAT62(uVar8,CONCAT11(cVar7,bVar6)) - unaff_EBP) -
       (uint)CARRY1((byte)uVar4,(byte)in_RAX);
  uVar4 = (uint)in_RAX | *in_RAX;
  bVar3 = (char)uVar4 - 0x34;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = bVar3 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  cVar1 = bVar3 - 1;
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar1);
  *pcVar5 = (*pcVar5 - cVar1) - (bVar3 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

