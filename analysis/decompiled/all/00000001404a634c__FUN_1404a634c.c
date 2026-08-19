// Function: FUN_1404a634c
// Addr: 1404a634c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a634c(uint *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar6;
  uint *in_RAX;
  char *pcVar4;
  longlong lVar5;
  char cVar7;
  char cVar8;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  uint *puVar3;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  cVar1 = (char)in_RAX;
  if (!in_PF) {
    *in_RAX = *in_RAX | (uint)in_RAX;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) & bVar6;
    *(byte *)param_1 = (char)*param_1 + bVar6;
    *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar1;
    puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((bVar6 + cVar8) * '\x02',cVar1));
    uVar2 = (uint)puVar3 | *puVar3;
    puVar3 = (uint *)(ulonglong)uVar2;
    *unaff_RDI = 0;
    *(char *)((longlong)puVar3 + unaff_RSI) = *(char *)((longlong)puVar3 + unaff_RSI) + cVar7;
    *puVar3 = *puVar3 | uVar2;
    cVar1 = (char)uVar2 + 'b';
    pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
    *(char *)param_1 = (char)*param_1 + unaff_SPL;
    *pcVar4 = *pcVar4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1 + '0');
  puVar3 = (uint *)(param_2 + lVar5);
  *puVar3 = *puVar3 & (uint)lVar5;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + cVar1 + '0';
  *(char *)param_1 = '\0';
  *param_1 = *param_1 ^ (uint)param_1;
  pcVar4 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar8 + cVar7,cVar7)) +
                   0x421004a);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

