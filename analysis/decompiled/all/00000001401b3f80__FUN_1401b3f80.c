// Function: FUN_1401b3f80
// Addr: 1401b3f80
// Size: 251 bytes


void FUN_1401b3f80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)param_1[0x29];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar3 = puVar2[6];
    if ((*(int *)(lVar3 + 0x28) == 0) || (*(uint *)(lVar3 + 0x24) < *(uint *)(*param_1 + 0x144))) {
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x70) + 0x18);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        *(undefined8 *)(*(longlong *)(puVar2[6] + 0x70) + 0x18) = 0;
      }
      puVar4 = *(undefined8 **)(puVar2[6] + 0x80);
      for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
        puVar6 = *(undefined8 **)(puVar5[3] + 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        *(undefined8 *)(puVar5[3] + 0x18) = 0;
        puVar6 = *(undefined8 **)(puVar5[3] + 0x30);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        *(undefined8 *)(puVar5[3] + 0x30) = 0;
      }
    }
  }
  return;
}

