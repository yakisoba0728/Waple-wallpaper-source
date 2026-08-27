// Function: FUN_1400dc080
// Addr: 1400dc080
// Size: 177 bytes


void FUN_1400dc080(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_38 [2];
  undefined2 local_28;
  
  uVar6 = 0;
  if (*(int *)(param_3 + 0x14) != 0) {
    do {
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,uVar6);
      (**(code **)*puVar3)(puVar3,local_38);
      uVar1 = local_38[0];
      uVar4 = 0;
      do {
        iVar2 = FUN_1402c10d0((&PTR_s_g_bufStatic_140484b60)[uVar4],uVar1);
        if (iVar2 == 0) goto LAB_1400dc102;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while ((int)uVar5 < 4);
      uVar4 = 0xffffffffffffffff;
LAB_1400dc102:
      uVar6 = uVar6 + 1;
      *(undefined2 *)(param_4 + uVar4 * 2) = local_28;
    } while (uVar6 < *(uint *)(param_3 + 0x14));
  }
  return;
}

