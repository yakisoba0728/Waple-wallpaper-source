// Function: FUN_1404a15cc
// Addr: 1404a15cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a15de) overlaps instruction at (ram,0x0001404a15db)
    */

void FUN_1404a15cc(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  longlong in_RAX;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  undefined6 uVar7;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + bVar6;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + bVar6;
  *(char *)(in_RAX + -0x31fffc1e) = *(char *)(in_RAX + -0x31fffc1e) + (char)((ulonglong)in_RAX >> 8)
  ;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0) {
    puVar2 = (undefined1 *)(CONCAT71(unaff_00000021,unaff_SPL) + 0xa21004a + param_2);
    *puVar2 = *puVar2;
  }
  else {
    *pcVar4 = *pcVar4 + unaff_SPL;
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *(byte *)(in_RAX * 2));
  }
  bVar6 = bVar6 | *(byte *)(unaff_RDI + in_RAX);
  in(3);
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + -0x1b);
  *pcVar1 = *pcVar1 + (char)pcVar4;
  uRam0000000021004a09 =
       CONCAT31(uRam0000000021004a09._1_3_,(char)uRam0000000021004a09 + '\t' + cVar5);
  in(3);
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + -0x1b);
  *pcVar1 = *pcVar1 + (char)pcVar4;
  cRam0000000042009412 = cRam0000000042009412 + '\t';
  *(char *)(unaff_RDI + 0x21004a09) = *(char *)(unaff_RDI + 0x21004a09) + bVar6;
  *(char *)(unaff_RSI + 0x21004a09) = *(char *)(unaff_RSI + 0x21004a09) + 'J';
  lVar3 = in(3);
  *(char *)(lVar3 + 0x1004a09) = *(char *)(lVar3 + 0x1004a09) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

