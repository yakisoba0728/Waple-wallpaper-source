// Function: FUN_1404ab560
// Addr: 1404ab560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab560(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  char cVar2;
  uint in_EAX;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  char *unaff_RDI;
  char *pcVar3;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1 + *unaff_RDI + (0xbffff2ab < in_EAX);
  pcVar3 = (char *)(param_2 * 2 + 0xf);
  *pcVar3 = *pcVar3 + cVar4;
  pcVar3 = (char *)((ulonglong)(in_EAX + 0x40000d54) + 0x21004ab4);
  *pcVar3 = *pcVar3 + (char)(in_EAX + 0x40000d54);
  *(char *)(param_2 + -0x77fff0ee) = *(char *)(param_2 + -0x77fff0ee) + cVar5;
  uVar1 = (undefined2)(in_EAX + 0x74050d56 >> 0x10);
  cVar2 = (char)(in_EAX + 0x74050d56);
  pcVar3 = (char *)(ulonglong)CONCAT22(uVar1,CONCAT11(0x4a,cVar2));
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + 'J';
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3 = (char *)(param_2 * 2 + 0xf);
  *pcVar3 = *pcVar3 + cVar4;
  *(char *)(param_2 + -0x77fff0ee) = *(char *)(param_2 + -0x77fff0ee) + cVar5;
  pcVar3 = (char *)(ulonglong)CONCAT22(uVar1,CONCAT11(0x4a,cVar2));
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + 'J';
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3[0x12] = pcVar3[0x12] + cVar2;
  uVar1 = TaskRegister();
  *(undefined2 *)(param_2 * 2 + 0xf) = uVar1;
  pcVar3[0x21004ab4] = pcVar3[0x21004ab4] + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

