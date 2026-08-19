// Function: FUN_1404ac62c
// Addr: 1404ac62c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac62c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *in_RAX;
  uint *puVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  undefined6 uVar9;
  char cVar10;
  char unaff_BL;
  char *unaff_RSI;
  char in_CF;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)param_1;
  bVar2 = (byte)in_RAX;
  cVar8 = ((char)((ulonglong)param_1 >> 8) - bVar2) - in_CF;
  *(undefined1 *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) =
       *(undefined1 *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7));
  *unaff_RSI = *unaff_RSI + cVar7;
  *in_RAX = *in_RAX + bVar2;
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,bVar2 | *in_RAX)
                           );
  uVar4 = (uint)puVar5 | *puVar5;
  cVar3 = (char)uVar4;
  pcVar6 = (char *)(ulonglong)
                   CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                            CONCAT11((char)(uVar4 >> 8) + cVar3,cVar3)) >> 8),cVar3)
  ;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar10;
  pcVar1 = (char *)(CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) + param_2);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar6[param_2] = pcVar6[param_2] + cVar10;
  pcVar6[-0x3cffefc7] = pcVar6[-0x3cffefc7] + cVar10;
  *pcVar6 = *pcVar6 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

