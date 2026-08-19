// Function: FUN_1404a6e18
// Addr: 1404a6e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6e18(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  uint *puVar5;
  
  bVar1 = *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + in_RAX);
  uVar4 = (int)in_RAX + 0xd0000234;
  puVar5 = (uint *)(ulonglong)uVar4;
  bVar2 = (byte)param_1 & 0x1f;
  *param_1 = *param_1 >> bVar2 | *param_1 << 0x20 - bVar2;
  cVar3 = (char)uVar4;
  (&stack0x00000000)
  [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
            CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar1,(char)param_2)) * 8] =
       (&stack0x00000000)
       [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                 CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar1,(char)param_2)) * 8] + cVar3;
  *puVar5 = *puVar5 | uVar4;
  *puVar5 = *puVar5 & uVar4;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *puVar5 = *puVar5 | uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3 + -0x2c);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  *unaff_RSI = *unaff_RSI & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

