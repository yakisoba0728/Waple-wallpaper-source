// Function: FUN_1404caf5c
// Addr: 1404caf5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cafe1) */
/* WARNING: Removing unreachable block (ram,0x0001404caff5) */
/* WARNING: Removing unreachable block (ram,0x0001404cafd1) */

void FUN_1404caf5c(byte param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  char cVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  uint *puVar5;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar2 = in_EAX + 0x30000ae4U ^ *(uint *)(ulonglong)(in_EAX + 0x30000ae4U);
  puVar5 = (uint *)(ulonglong)uVar2;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar7;
  uVar3 = uVar2 ^ *puVar5;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)uVar3;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar1 = in(10);
  uVar4 = CONCAT31((int3)(uVar3 >> 8),uVar1);
  puVar5 = (uint *)(ulonglong)uVar4;
  *(char *)puVar5 = (char)*puVar5 + cVar7;
  uVar4 = uVar4 ^ *puVar5;
  bVar6 = param_1 | (byte)(uVar2 >> 8) | (byte)(uVar3 >> 8) | (byte)(uVar4 >> 8);
  *param_4 = *param_4 + unaff_BL;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 & bVar6;
  *param_2 = *param_2 + (char)param_2;
  bVar6 = bVar6 & 7;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> bVar6 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 8 - bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

