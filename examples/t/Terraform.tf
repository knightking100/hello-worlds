# 1. terraform init
# 2. terraform apply -auto-approve

variable "file_name" {
  default = "hello-world"
}

resource "local_file" "hello_world" {
  content  = "Hello World!"
  filename = "${path.module}/${var.file_name}.txt"

  provisioner "local-exec" {
    command = "cat ${path.module}/${var.file_name}.txt"
  }
}