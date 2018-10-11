node {
  try {
    stage('checkout') {
      checkout scm
    }
    stage('compile') {
      echo "This is helloworld Jenkinsfile for pipeline as code DSL"
    }
    stage('test') {
      echo "Testing.."
    }
    stage('package') {
      echo "Packaging.."
    }
    stage('publish') {
      echo "uploading package..."
    }
  } finally {
    stage('cleanup') {
      echo "cleaning up..."
    }
  }
}
