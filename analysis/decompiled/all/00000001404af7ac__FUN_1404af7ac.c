// Function: FUN_1404af7ac
// Addr: 1404af7ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af7d3) overlaps instruction at (ram,0x0001404af7d2)
    */

void FUN_1404af7ac(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined6 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  undefined8 auStack_103 [29];
  undefined8 uStack_18;
  undefined8 *puVar7;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  func_0x00011895f7b3();
  puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar2 = '\x1b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  cRam00000001684aff51 = cRam00000001684aff51 + cVar4;
  if (-1 < cRam00000001684aff51) {
    pcVar1 = (char *)((longlong)&stack0xfffffffffffffff0 * 2 + 0xaecf3204);
    *pcVar1 = *pcVar1 + '2';
    uRam00000000aecf3204 = uRam00000000aecf3204 | 0xaecf3204;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,uVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,uVar3)) + '\x04';
  *(char *)(unaff_RDI + -0x7efffb28) = *(char *)(unaff_RDI + -0x7efffb28) + '\x04';
  puVar6 = auStack_103 + 1;
  cVar2 = '\x1a';
  do {
    puVar7 = puVar7 + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar7;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

