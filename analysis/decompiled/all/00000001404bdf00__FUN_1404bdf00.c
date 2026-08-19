// Function: FUN_1404bdf00
// Addr: 1404bdf00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdf00(char *param_1,char *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar4;
  byte bVar5;
  int in_EAX;
  undefined1 *puVar3;
  undefined4 unaff_ESP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uRam0000000165d4fc27 = uRam000000018a39a307;
  LOCK();
  UNLOCK();
  uRam000000018a39a307 = unaff_ESP;
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  param_1[-0x76e2ffdb] = param_1[-0x76e2ffdb] + (char)param_1;
  uVar1 = in_EAX + 0x74050002U >> 8 & 0x49e4f4;
  puVar3 = (undefined1 *)(ulonglong)(uVar1 << 8);
  cVar4 = (char)uVar1;
  *param_1 = *param_1 + cVar4;
  *puVar3 = *puVar3;
  *puVar3 = *puVar3;
  cVar4 = cVar4 + (char)((ulonglong)param_2 >> 8);
  uVar2 = in(0x49);
  *param_1 = *param_1 + cVar4;
  bVar5 = (byte)(CONCAT11(cVar4,uVar2) + 0x74050002 >> 8);
  *(byte *)(unaff_RDI + -0x58d7ffda) = *(byte *)(unaff_RDI + -0x58d7ffda) & bVar5;
  bVar5 = bVar5 & 0x94;
  *param_1 = *param_1 + bVar5;
  *param_2 = *param_2 + bVar5;
  in(4);
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

