// Function: FUN_1404c899c
// Addr: 1404c899c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8a11) overlaps instruction at (ram,0x0001404c8a10)
    */

void FUN_1404c899c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar6;
  uint in_EAX;
  uint uVar4;
  uint *puVar5;
  uint uVar7;
  longlong unaff_RSI;
  undefined1 *puStack_10;
  char *pcStack_8;
  char *pcVar8;
  
  uVar4 = in_EAX | 0xc8003152;
  pcStack_8 = (char *)(param_1 + -1);
  if (pcStack_8 != (char *)0x0 && uVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcStack_8 = *pcStack_8 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)((ulonglong)param_2 >> 8));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 ^ uVar4;
  uVar4 = uVar4 | 0xc8003152;
  puVar5 = (uint *)(ulonglong)uVar4;
  pcVar8 = (char *)(param_1 + -2);
  uVar7 = (uint)pcVar8;
  bVar6 = (byte)(uVar4 >> 8);
  if (pcVar8 == (char *)0x0 || uVar4 == 0) {
    *pcVar8 = *pcVar8 + bVar6;
    uVar4 = uVar4 + 0x54050002;
    puVar5 = (uint *)(ulonglong)uVar4;
    *(byte *)puVar5 = (byte)*puVar5 | (byte)uVar4;
    *puVar5 = *puVar5 ^ uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = *puVar5 & uVar7;
  bVar6 = bVar6 | (byte)param_2;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar6,(char)uVar4 + (char)*puVar5));
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + '\x01';
  cVar3 = cRam080031548c003153;
  uVar2 = (undefined3)(uVar4 >> 8);
  uVar4 = CONCAT31(uVar2,cRam080031548c003153);
  puVar5 = (uint *)(ulonglong)uVar4;
  *(uint *)((longlong)puVar5 * 2 + 0x21) = uVar7;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)((longlong)puVar5 + -0x73ffcead) = *(char *)((longlong)puVar5 + -0x73ffcead) + bVar6;
  puStack_10 = (undefined1 *)&pcStack_8;
  *puVar5 = *puVar5 ^ uVar4;
  *(byte *)(param_1 + 0xc21004a) = *(byte *)(param_1 + 0xc21004a) | (byte)pcVar8;
  puVar5 = (uint *)((ulonglong)CONCAT31(uVar2,cVar3) | 0x74);
  *puVar5 = *puVar5 & (uint)puVar5;
  *(char *)puVar5 = (char)*puVar5 + (char)puVar5;
  *(uint *)((ulonglong)CONCAT31(uVar2,cRam080031548c003153) * 2 + 0x21) = uVar7;
  pcVar1 = (char *)((longlong)&puStack_10 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (byte)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

