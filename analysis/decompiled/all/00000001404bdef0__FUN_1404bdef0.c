// Function: FUN_1404bdef0
// Addr: 1404bdef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdef0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar5;
  byte bVar6;
  char *in_RAX;
  undefined1 *puVar4;
  undefined4 unaff_ESP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uRam0000000165d4fc27 = uRam000000018a39a2f7;
  LOCK();
  UNLOCK();
  uRam000000018a39a2f7 = unaff_ESP;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  iVar3 = in((short)param_2);
  *param_4 = *param_4 + (char)uRam0000000165d4fc27;
  param_1[-0x76e2ffdb] = param_1[-0x76e2ffdb] + (char)param_1;
  uVar1 = iVar3 + 0x74050002U >> 8 & 0x49e4f4;
  puVar4 = (undefined1 *)(ulonglong)(uVar1 << 8);
  cVar5 = (char)uVar1;
  *param_1 = *param_1 + cVar5;
  *puVar4 = *puVar4;
  *puVar4 = *puVar4;
  cVar5 = cVar5 + (char)((ulonglong)param_2 >> 8);
  uVar2 = in(0x49);
  *param_1 = *param_1 + cVar5;
  bVar6 = (byte)(CONCAT11(cVar5,uVar2) + 0x74050002 >> 8);
  *(byte *)(unaff_RDI + -0x58d7ffda) = *(byte *)(unaff_RDI + -0x58d7ffda) & bVar6;
  bVar6 = bVar6 & 0x94;
  *param_1 = *param_1 + bVar6;
  *param_2 = *param_2 + bVar6;
  in(4);
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

