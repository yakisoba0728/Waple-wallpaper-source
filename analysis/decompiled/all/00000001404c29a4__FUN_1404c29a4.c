// Function: FUN_1404c29a4
// Addr: 1404c29a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c29a4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char *pcVar4;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int unaff_ESI;
  int *unaff_RDI;
  byte *pbVar5;
  
  uVar9 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar8 = (undefined1)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_1;
  cVar7 = (char)param_2 + (char)in_RAX[0x10];
  *(byte *)(ulonglong)(uint)(unaff_ESI + *in_RAX) =
       *(byte *)(ulonglong)(uint)(unaff_ESI + *in_RAX) >> (bVar6 & 0x1f);
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  pcVar1 = (char *)((longlong)pcVar4 * 2 + -0x46);
  *pcVar1 = *pcVar1 - bVar6;
  *pcVar4 = *pcVar4 + (char)in_RAX;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  uVar3 = in(CONCAT11(uVar8,cVar7));
  pcVar1 = (char *)((ulonglong)uVar3 * 2 + -0xc);
  *pcVar1 = *pcVar1 - bVar6;
  pcVar1 = (char *)((ulonglong)uVar3 * 2 + 2);
  *pcVar1 = *pcVar1 - bVar6;
  *(char *)((ulonglong)uVar3 + 0xb4904) = *(char *)((ulonglong)uVar3 + 0xb4904) + (char)(uVar3 >> 8)
  ;
  bVar2 = (byte)uVar3 ^
          *(byte *)CONCAT44((int)((ulonglong)param_2 >> 0x20),CONCAT22(uVar9,CONCAT11(uVar8,cVar7)))
  ;
  pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  bVar6 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  *unaff_RDI = *unaff_RDI + CONCAT22(uVar9,CONCAT11(uVar8,cVar7)) + (uint)CARRY1(bVar6,bVar2);
  *pbVar5 = *pbVar5 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

