// Function: FUN_1404a6e04
// Addr: 1404a6e04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6e04(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  longlong lVar5;
  uint uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint *puVar6;
  uint *puVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  bVar1 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar1 | *param_1 << 8 - bVar1;
  *(char *)(unaff_RDI + -0x37fff62e) = *(char *)(unaff_RDI + -0x37fff62e) + unaff_BH;
  uVar7 = *param_2 * 0x21;
  puVar8 = (uint *)(ulonglong)uVar7;
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *(byte *)((longlong)in_RAX * 2));
  bVar1 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + lVar5);
  uVar4 = (int)lVar5 + 0xd0000234;
  puVar6 = (uint *)(ulonglong)uVar4;
  bVar2 = (byte)uVar7 & 0x1f;
  *puVar8 = *puVar8 >> bVar2 | *puVar8 << 0x20 - bVar2;
  cVar3 = (char)uVar4;
  (&stack0x00000000)
  [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
            CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar1,(char)param_2)) * 8] =
       (&stack0x00000000)
       [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                 CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar1,(char)param_2)) * 8] + cVar3;
  *puVar6 = *puVar6 | uVar4;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *puVar6 = *puVar6 | uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3 + -0x2c);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  *unaff_RSI = *unaff_RSI & uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

