// Function: FUN_1404be7b4
// Addr: 1404be7b4
// Size: 1 bytes


void FUN_1404be7b4(char param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  uint3 uVar3;
  byte bVar5;
  ulonglong in_RAX;
  undefined1 *puVar4;
  char unaff_SPL;
  
  iVar1 = (int)(int *)(in_RAX | 0x74) + *(int *)(in_RAX | 0x74);
  bVar5 = (byte)((uint)iVar1 >> 8);
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar5;
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2 + (uint)(0xab < (byte)iVar1);
  uVar3 = CONCAT21((short)((uint)iVar1 >> 0x10),bVar5 >> 1) & 0x25ecf9;
  puVar4 = (undefined1 *)((ulonglong)uVar3 * 0x100);
  puVar4[9] = puVar4[9] + (char)uVar3;
  *param_4 = *param_4 + unaff_SPL;
  *puVar4 = *puVar4;
  in((short)param_2);
  puVar4 = (undefined1 *)((ulonglong)uVar3 * 0x100);
  puVar4[9] = puVar4[9] + (char)uVar3;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + param_1;
  *puVar4 = *puVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

